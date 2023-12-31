sebastian rausch                                       s e b a s t i a n   r a u s c h                                                                                                                                                                                                                                                                                                                                                                                                                                        
		printf("No se pudo abrir el archivo 'Derivada_en_cada_punto.txt'.\n");
		fclose(archivo_entrada);
		return 1;
	}
	
	// Calcula tomando las muestras del archivo de entrada y las guarda al derivar cada l�nea
	while (fscanf(archivo_entrada, "%lf\t%lf", &x, &y) == 2) {
		// Aprox de la derivada por l�mite
		derivada = (sin(4 * (x + 0.00001)) - y) / 0.00001;
		// Guardar la derivada en el archivo de salida
		fprintf(archivo_salida, "%.4f\t%.4f\n", x, derivada); 
	}
	
	// Cierra los archivos
	fclose(archivo_entrada);
	fclose(archivo_salida);
	
	printf("Derivada aproximada guardada en el archivo 'Derivada_en_cada_punto.txt'.\n");
	
	return 0;
}
