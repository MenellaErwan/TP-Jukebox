--
-- Base de données :  `jukebox`
--

-- --------------------------------------------------------

--
-- Structure de la table `Musique`
--

CREATE TABLE `Musique` (
  `ID` decimal(65,0) NOT NULL,
  `NomMusique` varchar(50) NOT NULL,
  `Genre` varchar(50) NOT NULL,
  `Artiste` varchar(50) NOT NULL,
  `Durée` time NOT NULL,
  `URL` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Contenu de la table `Musique`
--

INSERT INTO `Musique` (`ID`, `NomMusique`, `Genre`, `Artiste`, `Durée`, `URL`) VALUES
('1', 'musiqueTest1', 'inconnu', 'inconnu', '00:01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique'),
('2', 'musiqueTest2', 'inconnu', 'inconnu', '00:01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique'),
('3', 'musiqueTest3', 'inconnu', 'inconnu', '00:01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique'),
('4', 'musiqueTest4', 'inconnu', 'inconnu', '00:01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique'),
('5', 'musiqueTest5', 'inconnu', 'inconnu', '00:01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique'),
('6', 'musiqueTest6', 'inconnu', 'inconnu', '00:01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique'),
('7', 'musiqueTest7', 'inconnu', 'inconnu', '00:01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique'),
('8', 'musiqueTest8', 'inconnu', 'inconnu', '00:01:26', '/home/bigbrother4/galvez/DEV/projetJukebox/musique'),
('9', 'musiqueTest9', 'inconnu', 'inconnu', '00:03:00', '/home/bigbrother4/galvez/DEV/projetJukebox/musique');

