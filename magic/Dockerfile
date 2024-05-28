ARG parent_image
FROM $parent_image

ADD seeds $FUZZ/seeds
ADD magic $FUZZ/magic
RUN chown -R $HOST_USER $FUZZ/magic

USER $HOST_USER
COPY build.sh $FUZZ/
RUN bash $FUZZ/fuzzer_build.sh
ENV BENCHMARK=magicError
ENV FUZZ_TARGET=$FUZZ/magic/magicError
ENV FUZZING_FLAG="@@"
